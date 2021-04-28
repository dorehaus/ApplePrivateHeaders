/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate;

@interface NSDateInterval : NSObject <NSCopying, NSSecureCoding>

@property (copy,readonly) NSDate * startDate; 
@property (copy,readonly) NSDate * endDate; 
@property (readonly) double duration; 
+(id)allocWithZone:(NSZone*)arg1 ;
+(char)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(long long)compare:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithStartDate:(id)arg1 duration:(double)arg2 ;
-(id)initWithStartDate:(id)arg1 endDate:(id)arg2 ;
-(NSDate *)endDate;
-(NSDate *)startDate;
-(double)duration;
-(char)isEqualToDateInterval:(id)arg1 ;
-(char)containsDate:(id)arg1 ;
-(char)intersectsDateInterval:(id)arg1 ;
-(id)intersectionWithDateInterval:(id)arg1 ;
@end
