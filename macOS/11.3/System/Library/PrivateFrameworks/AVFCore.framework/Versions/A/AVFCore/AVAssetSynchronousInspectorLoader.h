/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/Versions/A/AVFCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFCore/AVFCore-Structs.h>
#import <AVFCore/AVAssetInspectorLoader.h>

@class AVAssetInspector;

@interface AVAssetSynchronousInspectorLoader : AVAssetInspectorLoader {

	AVAssetInspector* _assetInspector;

}
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(SCD_Struct_CM3)duration;
-(char)isReadable;
-(long long)statusOfValueForKey:(id)arg1 error:(id*)arg2 ;
-(void)loadValuesAsynchronouslyForKeys:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)loadValuesAsynchronouslyForKeys:(id)arg1 keysForCollectionKeys:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)lyrics;
-(char)isPlayable;
-(char)isExportable;
-(char)isComposable;
-(id)assetInspector;
-(id)initWithAssetInspector:(id)arg1 ;
@end
