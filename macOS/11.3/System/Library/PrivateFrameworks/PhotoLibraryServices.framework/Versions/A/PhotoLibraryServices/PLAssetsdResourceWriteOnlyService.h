/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:02 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/Versions/A/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLAbstractLibraryServicesManagerService.h>
#import <libobjc.A.dylib/PLAssetsdResourceWriteOnlyServiceProtocol.h>

@class PLAssetsdConnectionAuthorization, NSString;

@interface PLAssetsdResourceWriteOnlyService : PLAbstractLibraryServicesManagerService <PLAssetsdResourceWriteOnlyServiceProtocol> {

	PLAssetsdConnectionAuthorization* _connectionAuthorization;

}

@property (nonatomic,readonly) PLAssetsdConnectionAuthorization * connectionAuthorization;              //@synthesize connectionAuthorization=_connectionAuthorization - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)addAssetWithHash:(id)arg1 orPublicGlobalUUID:(id)arg2 toStreamID:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)removeAssetWithHash:(id)arg1 orPublicGlobalUUID:(id)arg2 fromStreamID:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)saveAssetWithDataAndPorts:(id)arg1 imageSurface:(id)arg2 previewImageSurface:(id)arg3 reply:(/*^block*/id)arg4 ;
-(PLAssetsdConnectionAuthorization *)connectionAuthorization;
-(void)saveAssetWithDataAndPorts:(id)arg1 clientConnection:(id)arg2 imageSurface:(id)arg3 previewImageSurface:(id)arg4 reply:(/*^block*/id)arg5 ;
-(id)initWithLibraryServicesManager:(id)arg1 connectionAuthorization:(id)arg2 ;
-(void)_modifyAssetWithHash:(id)arg1 orPublicGlobalUUID:(id)arg2 forStreamID:(id)arg3 addToStream:(char)arg4 reply:(/*^block*/id)arg5 ;
@end
