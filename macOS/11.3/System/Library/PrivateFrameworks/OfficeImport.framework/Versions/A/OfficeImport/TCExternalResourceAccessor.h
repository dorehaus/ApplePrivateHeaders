/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:44 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/Versions/A/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_xpc_object;
@class NSURL, NSString, NSArray, NSDictionary, NSError, NSObject;

@interface TCExternalResourceAccessor : NSObject {

	NSURL* mDocumentURL;
	NSString* mExtractorServiceName;
	NSArray* mExternalResourceURLs;
	NSDictionary* mAccessErrorsForExternalResourceURLs;
	NSError* mError;
	NSObject*<OS_dispatch_queue> mAccessorQueue;
	NSObject*<OS_xpc_object> mAccessorConnection;

}

@property (nonatomic,readonly) NSArray * externalResourceURLs; 
@property (nonatomic,readonly) NSError * error; 
-(NSError *)error;
-(id)p_localizedErrorWithError:(id)arg1 forURL:(id)arg2 ;
-(void)p_finishAccessingExternalResourcesWithExternalResourceURLs:(id)arg1 accessErrorsForExternalResourceURLs:(id)arg2 error:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)initWithDocumentURL:(id)arg1 extractorServiceName:(id)arg2 ;
-(void)accessExternalResourcesWithCompletionHandler:(/*^block*/id)arg1 ;
-(char)couldAccessExternalResourceURL:(id)arg1 error:(out id*)arg2 ;
-(NSArray *)externalResourceURLs;
@end
