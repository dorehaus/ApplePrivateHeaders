/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:05 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Metal.framework/Versions/A/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/Metal-Structs.h>
#import <Metal/MTLIndirectArgumentDescriptor.h>

@interface MTLIndirectArgumentDescriptorInternal : MTLIndirectArgumentDescriptor {

	MTLArgumentDescriptorPrivate _private;

}
+(id)indirectArgumentDescriptor;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(unsigned long long)index;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(void)setIndex:(unsigned long long)arg1 ;
-(void)setAccess:(unsigned long long)arg1 ;
-(void)setArrayLength:(unsigned long long)arg1 ;
-(void)setDataType:(unsigned long long)arg1 ;
-(unsigned long long)constantBlockAlignment;
-(unsigned long long)dataType;
-(void)setConstantBlockAlignment:(unsigned long long)arg1 ;
-(void)setTextureType:(unsigned long long)arg1 ;
-(unsigned long long)textureType;
-(unsigned long long)arrayLength;
-(unsigned long long)access;
@end

