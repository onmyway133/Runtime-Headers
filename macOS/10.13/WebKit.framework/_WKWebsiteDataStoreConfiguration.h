/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WebKit.framework/Versions/A/WebKit
 */

@interface _WKWebsiteDataStoreConfiguration : NSObject {
    struct RetainPtr<NSURL> { 
        void *m_ptr; 
    }  _cookieStorageFileURL;
    struct RetainPtr<NSURL> { 
        void *m_ptr; 
    }  _indexedDBDatabaseDirectoryURL;
    struct RetainPtr<NSURL> { 
        void *m_ptr; 
    }  _webSQLDatabaseDirectoryURL;
    struct RetainPtr<NSURL> { 
        void *m_ptr; 
    }  _webStorageDirectoryURL;
}

@property (setter=_setCookieStorageFile:, nonatomic, readwrite, copy) NSURL *_cookieStorageFile;
@property (setter=_setIndexedDBDatabaseDirectory:, nonatomic, readwrite, copy) NSURL *_indexedDBDatabaseDirectory;
@property (setter=_setWebSQLDatabaseDirectory:, nonatomic, readwrite, copy) NSURL *_webSQLDatabaseDirectory;
@property (setter=_setWebStorageDirectory:, nonatomic, readwrite, copy) NSURL *_webStorageDirectory;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_cookieStorageFile;
- (id)_indexedDBDatabaseDirectory;
- (void)_setCookieStorageFile:(id)arg1;
- (void)_setIndexedDBDatabaseDirectory:(id)arg1;
- (void)_setWebSQLDatabaseDirectory:(id)arg1;
- (void)_setWebStorageDirectory:(id)arg1;
- (id)_webSQLDatabaseDirectory;
- (id)_webStorageDirectory;

@end
