/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:19 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/Versions/A/AVFCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFCore/AVFCore-Structs.h>
#import <Foundation/NSValue.h>

@interface CMTimeRangeAsValue : NSValue {

	SCD_Struct_CM5 _timeRange;

}
+(char)supportsSecureCoding;
+(id)valueWithCMTimeRange:(SCD_Struct_CM5)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(const char*)objCType;
-(Class)classForCoder;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)getValue:(void*)arg1 ;
-(char)isEqualToValue:(id)arg1 ;
-(SCD_Struct_CM5)CMTimeRangeValue;
@end

