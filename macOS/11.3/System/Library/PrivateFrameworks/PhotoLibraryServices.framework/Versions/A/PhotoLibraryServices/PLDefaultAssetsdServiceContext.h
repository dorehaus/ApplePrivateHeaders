/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:02 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/Versions/A/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PLAssetsdServiceContext.h>

@class NSString, NSError, NSXPCConnection, PLPhotoLibraryBundle, PLAssetsdConnectionAuthorization;

@interface PLDefaultAssetsdServiceContext : NSObject <PLAssetsdServiceContext> {

	SEL _selector;
	NSXPCConnection* _connection;
	PLPhotoLibraryBundle* _libraryBundle;
	PLAssetsdConnectionAuthorization* _connectionAuthorization;
	NSError* _replyWarning;

}

@property (nonatomic,copy) NSError * replyWarning;                                         //@synthesize replyWarning=_replyWarning - In the implementation block
@property (nonatomic,readonly) char isClientAuthorizedForTCCServicePhotos; 
@property (nonatomic,readonly) char isClientAuthorizedForTCCServicePhotosAdd; 
@property (nonatomic,copy,readonly) NSString * clientDebugDescription; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)hasEntitlement:(id)arg1 ;
-(id)libraryServicesManager;
-(NSString *)clientDebugDescription;
-(char)isClientAuthorizedForTCCServicePhotos;
-(char)isClientAuthorizedForTCCServicePhotosAdd;
-(void)awaitLibraryState:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSError *)replyWarning;
-(void)setReplyWarning:(NSError *)arg1 ;
-(id)initWithSelector:(SEL)arg1 connection:(id)arg2 libraryBundle:(id)arg3 connectionAuthorization:(id)arg4 ;
@end

