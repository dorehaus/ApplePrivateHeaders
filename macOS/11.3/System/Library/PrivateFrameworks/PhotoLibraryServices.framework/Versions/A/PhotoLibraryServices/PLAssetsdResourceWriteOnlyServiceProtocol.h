/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:02 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/Versions/A/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PLAssetsdResourceWriteOnlyServiceProtocol <NSObject>
@required
-(void)addAssetWithHash:(id)arg1 orPublicGlobalUUID:(id)arg2 toStreamID:(id)arg3 reply:(/*^block*/id)arg4;
-(void)removeAssetWithHash:(id)arg1 orPublicGlobalUUID:(id)arg2 fromStreamID:(id)arg3 reply:(/*^block*/id)arg4;
-(void)saveAssetWithDataAndPorts:(id)arg1 imageSurface:(id)arg2 previewImageSurface:(id)arg3 reply:(/*^block*/id)arg4;

@end

