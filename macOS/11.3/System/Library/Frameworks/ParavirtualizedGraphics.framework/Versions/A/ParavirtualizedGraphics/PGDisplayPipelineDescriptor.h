/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:45 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/ParavirtualizedGraphics.framework/Versions/A/ParavirtualizedGraphics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ParavirtualizedGraphics/ParavirtualizedGraphics-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface PGDisplayPipelineDescriptor : NSObject <NSCopying> {

	BOOL hasGamma;
	unsigned long long renderTargetPixelFormat;

}

@property (assign) unsigned long long renderTargetPixelFormat; 
@property (assign) BOOL hasGamma; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(unsigned long long)renderTargetPixelFormat;
-(BOOL)hasGamma;
-(void)setRenderTargetPixelFormat:(unsigned long long)arg1 ;
-(void)setHasGamma:(BOOL)arg1 ;
@end

