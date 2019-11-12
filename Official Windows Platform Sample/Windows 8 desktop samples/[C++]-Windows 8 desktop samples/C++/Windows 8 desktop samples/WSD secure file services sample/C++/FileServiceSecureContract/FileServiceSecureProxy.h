// <Include>
///////////////////////////////////////////////////////////////////////////////
//
// This file is automatically generated.  However, the file needs to be
// modified in order to accomodate changes needed for for the device host
// creation to use WSDCreateDeviceHost2 instead with customized parameters,
// or for the device proxy creation to use WSDCreateDeviceProxy2 instead with
// customized parameters.
//
///////////////////////////////////////////////////////////////////////////////
// </Include>

// <Include>
#pragma once
// </Include>

// <CDATA>

class CFileServiceSecureProxy;
class CFileServiceSecureEventSource;

// </CDATA>

// <ProxyBuilderDeclarations>
HRESULT CreateCFileServiceSecureProxy(
                BOOL bIsServerCertHash,
                _In_opt_ LPWSTR pszServerCertHashAlg,
                _In_opt_ LPWSTR pszServerCertHashCertHash,
                BOOL bIsCertAuth,
                _In_opt_ LPWSTR pszCertAuthCertHash,
                BOOL bIsHttpAuth,
                DWORD dwHttpAuthScheme,
                LPCWSTR pszDeviceAddress,
                LPCWSTR pszLocalAddress,
                CFileServiceSecureProxy** ppProxyOut,
                IWSDXMLContext** ppContextOut);

HRESULT CreateCFileServiceSecureProxyById(
                BOOL bIsServerCertHash,
                _In_opt_ LPWSTR pszServerCertHashAlg,
                _In_opt_ LPWSTR pszServerCertHashCertHash,
                BOOL bIsCertAuth,
                _In_opt_ LPWSTR pszCertAuthCertHash,
                BOOL bIsHttpAuth,
                DWORD dwHttpAuthScheme,
                LPCWSTR pszDeviceAddress,
                LPCWSTR pszServiceId,
                LPCWSTR pszLocalAddress,
                CFileServiceSecureProxy** ppProxyOut,
                IWSDXMLContext** ppContextOut);
// </ProxyBuilderDeclarations>

// <CDATA>

class CFileServiceSecureProxy: public IFileServiceSecureProxy
{
protected:
    ~CFileServiceSecureProxy();
    LONG m_cRef;
    IWSDServiceProxy* m_genericProxy;

public:
    HRESULT STDMETHODCALLTYPE Init(IWSDServiceProxy* genericProxy);
    CFileServiceSecureProxy();

// </CDATA>

// <IUnknownDeclarations>
    // 
    // IUnknown
    // 
    HRESULT STDMETHODCALLTYPE QueryInterface(REFIID riid, void **ppvObject);
    ULONG STDMETHODCALLTYPE AddRef();
    ULONG STDMETHODCALLTYPE Release();
// </IUnknownDeclarations>

// <FunctionDeclarations>
    HRESULT STDMETHODCALLTYPE
    GetFileList
    (   /* [out] */ GET_FILE_LIST_RESPONSE** parametersOut
    );

    HRESULT STDMETHODCALLTYPE
    GetFile
    (   /* [in] */ GET_FILE_REQUEST* parameters
    ,   /* [out] */ GET_FILE_RESPONSE** parametersOut
    );

// </FunctionDeclarations>

// <FunctionDeclarations>
    HRESULT STDMETHODCALLTYPE
    BeginGetFileList
    (   /* [in] */ IUnknown* AsyncState
    ,   /* [in] */ IWSDAsyncCallback* AsyncCallback
    ,   /* [out] */ IWSDAsyncResult** AsyncResultOut
    );

    HRESULT STDMETHODCALLTYPE
    EndGetFileList
    (   /* [in] */ IWSDAsyncResult* AsyncResult
    ,   /* [out] */ GET_FILE_LIST_RESPONSE** parametersOut
    );

    HRESULT STDMETHODCALLTYPE
    BeginGetFile
    (   /* [in] */ GET_FILE_REQUEST* parameters
    ,   /* [in] */ IUnknown* AsyncState
    ,   /* [in] */ IWSDAsyncCallback* AsyncCallback
    ,   /* [out] */ IWSDAsyncResult** AsyncResultOut
    );

    HRESULT STDMETHODCALLTYPE
    EndGetFile
    (   /* [in] */ IWSDAsyncResult* AsyncResult
    ,   /* [out] */ GET_FILE_RESPONSE** parametersOut
    );

// </FunctionDeclarations>

// <SubscriptionFunctionDeclarations>
    HRESULT STDMETHODCALLTYPE
    SubscribeToFileChangeEvent
    (    IFileServiceSecureEventNotify* eventSink
    );

    HRESULT STDMETHODCALLTYPE
    UnsubscribeToFileChangeEvent
    (    void
    );

// </SubscriptionFunctionDeclarations>

// <CDATA>

};

// </CDATA>

// <EventSourceBuilderDeclarations>
HRESULT CreateCFileServiceSecureEventSource(IWSDDeviceHost* pHost, LPCWSTR pszServiceId, CFileServiceSecureEventSource** ppEventSourceOut);
// </EventSourceBuilderDeclarations>

// <CDATA>

class CFileServiceSecureEventSource: public IFileServiceSecureEventNotify
{
protected:
    ~CFileServiceSecureEventSource();
    LONG m_cRef;
    IWSDDeviceHost* m_host;
    const WCHAR* m_serviceId;

public:
    HRESULT STDMETHODCALLTYPE Init(IWSDDeviceHost* pIWSDDeviceHost, const WCHAR* serviceId);
    CFileServiceSecureEventSource();

// </CDATA>

// <IUnknownDeclarations>
    // 
    // IUnknown
    // 
    HRESULT STDMETHODCALLTYPE QueryInterface(REFIID riid, void **ppvObject);
    ULONG STDMETHODCALLTYPE AddRef();
    ULONG STDMETHODCALLTYPE Release();
// </IUnknownDeclarations>

// <FunctionDeclarations>
    HRESULT STDMETHODCALLTYPE
    FileChangeEvent
    (   /* [in] */ FILE_CHANGE_EVENT* result
    );

// </FunctionDeclarations>

// <CDATA>

};

// </CDATA>
