/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticExtensionsDaemon.framework/Versions/A/DiagnosticExtensionsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSURLSessionDelegate.h>
#import <libobjc.A.dylib/NSURLSessionTaskDelegate.h>
#import <libobjc.A.dylib/NSURLSessionDataDelegate.h>

@protocol OS_os_log, DEDSeedingClientDelegate;
@class NSObject, DEDBugSessionConfiguration, NSURLSession, NSString;

@interface DEDSeedingClient : NSObject <NSURLSessionDelegate, NSURLSessionTaskDelegate, NSURLSessionDataDelegate> {

	NSObject*<OS_os_log> _log;
	DEDBugSessionConfiguration* _config;
	id<DEDSeedingClientDelegate> _uploadDelegate;
	NSURLSession* _foregroundSession;
	NSString* _bugSessionIdentifier;
	NSURLSession* _backgroundSession;

}

@property (retain) NSObject*<OS_os_log> log;                                 //@synthesize log=_log - In the implementation block
@property (retain) DEDBugSessionConfiguration * config;                      //@synthesize config=_config - In the implementation block
@property (__weak) id<DEDSeedingClientDelegate> uploadDelegate;              //@synthesize uploadDelegate=_uploadDelegate - In the implementation block
@property (retain) NSURLSession * foregroundSession;                         //@synthesize foregroundSession=_foregroundSession - In the implementation block
@property (retain) NSString * bugSessionIdentifier;                          //@synthesize bugSessionIdentifier=_bugSessionIdentifier - In the implementation block
@property (retain) NSURLSession * backgroundSession;                         //@synthesize backgroundSession=_backgroundSession - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)cleanup;
-(id)baseURL;
-(DEDBugSessionConfiguration *)config;
-(void)setConfig:(DEDBugSessionConfiguration *)arg1 ;
-(NSObject*<OS_os_log>)log;
-(void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2 ;
-(void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(void)setLog:(NSObject*<OS_os_log>)arg1 ;
-(void)setBackgroundSession:(NSURLSession *)arg1 ;
-(NSURLSession *)backgroundSession;
-(NSURLSession *)foregroundSession;
-(void)setForegroundSession:(NSURLSession *)arg1 ;
-(id<DEDSeedingClientDelegate>)uploadDelegate;
-(NSString *)bugSessionIdentifier;
-(void)setUploadDelegate:(id<DEDSeedingClientDelegate>)arg1 ;
-(id)ongoingUploads;
-(id)initWithConfiguration:(id)arg1 sessionID:(id)arg2 delegate:(id)arg3 ;
-(void)updatePromise:(id)arg1 withFilename:(id)arg2 size:(long long)arg3 status:(long long)arg4 success:(/*^block*/id)arg5 error:(/*^block*/id)arg6 ;
-(void)sendFile:(id)arg1 promise:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)makePromiseWithUUID:(id)arg1 extensionID:(id)arg2 success:(/*^block*/id)arg3 error:(/*^block*/id)arg4 ;
-(void)updatePromise:(id)arg1 withAttachmentGroup:(id)arg2 status:(long long)arg3 success:(/*^block*/id)arg4 error:(/*^block*/id)arg5 ;
-(void)cancelPromise:(id)arg1 withSuccess:(/*^block*/id)arg2 error:(/*^block*/id)arg3 ;
-(void)setBugSessionIdentifier:(NSString *)arg1 ;
-(char)isLoggedIn;
-(id)loginWithTokenURL;
-(void)postToURL:(id)arg1 parameters:(id)arg2 encoding:(unsigned long long)arg3 success:(/*^block*/id)arg4 error:(/*^block*/id)arg5 ;
-(id)filerURL;
-(id)beginUploadWithRequest:(id)arg1 fromFileURL:(id)arg2 error:(id*)arg3 ;
-(void)getFilerTokenForPromise:(id)arg1 withSuccess:(/*^block*/id)arg2 error:(/*^block*/id)arg3 ;
-(void)seedingLoginWithSuccess:(/*^block*/id)arg1 error:(/*^block*/id)arg2 ;
-(id)newFilerTokenURL;
-(id)HTTPErrorWithResponse:(id)arg1 withData:(id)arg2 ;
-(void)dataForURLRequest:(id)arg1 success:(/*^block*/id)arg2 error:(/*^block*/id)arg3 ;
-(void)jsonForURLRequest:(id)arg1 success:(/*^block*/id)arg2 error:(/*^block*/id)arg3 ;
-(void)performHTTPMethod:(id)arg1 toURL:(id)arg2 parameters:(id)arg3 encoding:(unsigned long long)arg4 success:(/*^block*/id)arg5 error:(/*^block*/id)arg6 ;
-(id)bodyDataForParameters:(id)arg1 encoding:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)contentTypeForParameterEncoding:(unsigned long long)arg1 ;
-(id)promiseConfiguration;
-(id)newFilePromiseURL;
-(id)filePromiseURLForPromise:(id)arg1 ;
-(void)jsonForURL:(id)arg1 success:(/*^block*/id)arg2 error:(/*^block*/id)arg3 ;
-(void)updatePromise:(id)arg1 withFilename:(id)arg2 size:(long long)arg3 extensionID:(id)arg4 status:(long long)arg5 success:(/*^block*/id)arg6 error:(/*^block*/id)arg7 ;
-(void)putToURL:(id)arg1 parameters:(id)arg2 encoding:(unsigned long long)arg3 success:(/*^block*/id)arg4 error:(/*^block*/id)arg5 ;
-(id)_serverErrorFromTask:(id)arg1 ;
-(id)seedingURL;
-(id)_formEncodedBodyForDictionary:(id)arg1 ;
-(id)_keyValuePairsForKey:(id)arg1 value:(id)arg2 ;
-(void)dataForURL:(id)arg1 success:(/*^block*/id)arg2 error:(/*^block*/id)arg3 ;
-(void)deleteResourceAtURL:(id)arg1 success:(/*^block*/id)arg2 error:(/*^block*/id)arg3 ;
-(void)getPromise:(id)arg1 withSuccess:(/*^block*/id)arg2 error:(/*^block*/id)arg3 ;
@end
