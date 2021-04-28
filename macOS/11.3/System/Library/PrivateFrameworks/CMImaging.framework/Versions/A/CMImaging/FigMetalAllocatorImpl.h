/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CMImaging.framework/Versions/A/CMImaging
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class FigMetalUtils;


@protocol FigMetalAllocatorImpl
@property (nonatomic,readonly) unsigned long long alignment; 
@property (nonatomic,readonly) unsigned long long memSize; 
@property (nonatomic,readonly) FigMetalUtils * utils; 
@required
-(unsigned long long)memSize;
-(id)initWithMetalUtils:(id)arg1;
-(int)setupWithDescriptor:(id)arg1;
-(SCD_Struct_Fi2*)getSizeAndAlignForDescriptor:(id)arg1;
-(unsigned long long)textureOffset:(id)arg1;
-(BOOL)hasCreatedTexture:(id)arg1;
-(FigMetalUtils *)utils;
-(id)description;
-(id)newTextureWithDescriptor:(id)arg1 offset:(unsigned long long)arg2;
-(unsigned long long)alignment;
-(void)purgeResources;

@end

