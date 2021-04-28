/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/Versions/A/AVFCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFCore/AVFCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class AVCaptionPositionInternal;

@interface AVCaptionPosition : NSObject <NSCopying, NSSecureCoding> {

	AVCaptionPositionInternal* _internal;

}

@property (nonatomic,readonly) long long unitType; 
@property (nonatomic,readonly) long long cellX; 
@property (nonatomic,readonly) long long cellY; 
@property (nonatomic,readonly) float relativeToEnclosingRegionX; 
@property (nonatomic,readonly) float relativeToEnclosingRegionY; 
+(char)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)unitType;
-(id)initWithCellPositionX:(long long)arg1 andY:(long long)arg2 ;
-(id)initWithRelativeToEnclosingRegionX:(float)arg1 andY:(float)arg2 ;
-(long long)cellX;
-(long long)cellY;
-(float)relativeToEnclosingRegionX;
-(float)relativeToEnclosingRegionY;
@end

