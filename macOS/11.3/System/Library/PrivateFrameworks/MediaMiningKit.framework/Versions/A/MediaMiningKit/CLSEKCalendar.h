/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:26 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/Versions/A/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSSet, NSString;

@interface CLSEKCalendar : NSObject <NSCoding> {

	char _hasSharees;
	NSSet* _shareesAndOwner;
	NSString* _calendarIdentifier;

}

@property (readonly) NSString * calendarIdentifier;              //@synthesize calendarIdentifier=_calendarIdentifier - In the implementation block
@property (readonly) char hasSharees;                            //@synthesize hasSharees=_hasSharees - In the implementation block
@property (readonly) NSSet * shareesAndOwner;                    //@synthesize shareesAndOwner=_shareesAndOwner - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)calendarIdentifier;
-(char)hasSharees;
-(NSSet *)shareesAndOwner;
-(id)initWithEKCalendar:(id)arg1 ;
@end

