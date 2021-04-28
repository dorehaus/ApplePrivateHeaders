/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:54 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/Versions/A/MetalTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTLBuffer <MTLResource>
@property (readonly) unsigned long long length; 
@property (readonly) id<MTLBuffer> remoteStorageBuffer; 
@required
-(unsigned long long)length;
-(void*)contents;
-(void)didModifyRange:(NSRange)arg1;
-(void)addDebugMarker:(id)arg1 range:(NSRange)arg2;
-(void)removeAllDebugMarkers;
-(id)newTextureWithDescriptor:(id)arg1 offset:(unsigned long long)arg2 bytesPerRow:(unsigned long long)arg3;
-(id)newRemoteBufferViewForDevice:(id)arg1;
-(id<MTLBuffer>)remoteStorageBuffer;

@end
