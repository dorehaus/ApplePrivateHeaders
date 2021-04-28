/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Safari/RemoteNotificationCenterRequest.h>

@protocol RemoteNotificationVerificationRequestProxyDelegate;
@class NSURL, NSString, NSURLSession, NSOperationQueue, NSDictionary, NSArray;

@interface RemoteNotificationVerificationRequestProxy : RemoteNotificationCenterRequest {

	id<RemoteNotificationVerificationRequestProxyDelegate> _delegate;
	NSURL* _referrerURL;
	NSURL* _apiURL;
	NSString* _bundleDownloadPath;
	NSURLSession* _remoteBundleDownloadSession;
	NSOperationQueue* _remoteBundleVerificationOperationQueue;
	char _performingVerificationTest;
	NSDictionary* _queryParameters;
	unsigned long long _requestID;
	NSArray* _allowedDomains;

}

@property (nonatomic,copy) NSDictionary * queryParameters;              //@synthesize queryParameters=_queryParameters - In the implementation block
@property (assign,nonatomic) unsigned long long requestID;              //@synthesize requestID=_requestID - In the implementation block
@property (nonatomic,readonly) NSArray * allowedDomains;                //@synthesize allowedDomains=_allowedDomains - In the implementation block
-(unsigned long long)requestID;
-(void)setRequestID:(unsigned long long)arg1 ;
-(NSDictionary *)queryParameters;
-(void)setQueryParameters:(NSDictionary *)arg1 ;
-(NSArray *)allowedDomains;
-(void)centerDelegateDidFinishRequest:(id)arg1 ;
-(void)createNotificationBundleFromPath:(id)arg1 displayName:(id)arg2 ;
-(void)_handshakeDidFailWithErrorMessage:(id)arg1 ;
-(void)_downloadFirstValidRemoteNotificationBundleWithAPIVersions:(id)arg1 ;
-(id)_bundleDownloadPathWithTemporaryLocation:(id)arg1 ;
-(void)_verifyBundleContents:(id)arg1 bundleVersion:(long long)arg2 ;
-(char)_createICNSFileInExtractedPackage:(id)arg1 ;
-(char)_cleanlyCreateNotificationBundleForExtractedPackage:(id)arg1 withDisplayName:(id)arg2 ;
-(id)_expectedHashForFilename:(id)arg1 manifest:(id)arg2 bundleVersion:(long long)arg3 ;
-(id)_hashStringForFileWithName:(id)arg1 path:(id)arg2 manifest:(id)arg3 bundleVersion:(long long)arg4 ;
-(char)_createNotificationBundleForExtractedPackage:(id)arg1 atBundleDestination:(id)arg2 withDisplayName:(id)arg3 ;
-(char)_verifySignature:(id)arg1 ;
-(char)_verifyManifestHashes:(id)arg1 bundleVersion:(long long)arg2 ;
-(void)_moveFilesIntoPlaceFromPath:(id)arg1 websiteData:(id)arg2 allowedDomains:(id)arg3 ;
-(void)_verifyReferrerURLAndAllowedDomains:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_handshakeDidPassWithWebsiteName:(id)arg1 lowResIcon:(id)arg2 highResIcon:(id)arg3 ;
-(id)initWithWebsiteIdentifier:(id)arg1 apiURL:(id)arg2 referrerURL:(id)arg3 requestID:(unsigned long long)arg4 delegate:(id)arg5 ;
-(void)startHandshake;
@end
