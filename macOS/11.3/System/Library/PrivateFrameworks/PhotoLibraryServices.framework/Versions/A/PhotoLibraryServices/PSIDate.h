/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:02 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/Versions/A/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PSIDate : NSObject {

	long long _int64Representation;
	long long _int64RepresentationMask;

}

@property (readonly) long long era; 
@property (readonly) long long year; 
@property (readonly) long long month; 
@property (readonly) long long day; 
@property (readonly) long long int64Representation;                  //@synthesize int64Representation=_int64Representation - In the implementation block
@property (readonly) long long int64RepresentationMask;              //@synthesize int64RepresentationMask=_int64RepresentationMask - In the implementation block
+(id)distantFuture;
+(id)distantPast;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(long long)era;
-(long long)year;
-(long long)month;
-(long long)day;
-(id)dateComponents;
-(id)initWithDateComponents:(id)arg1 ;
-(id)initWithUniversalDate:(id)arg1 calendar:(id)arg2 ;
-(long long)int64RepresentationMask;
-(long long)int64Representation;
-(id)initWithInt64Representation:(long long)arg1 ;
@end

