/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:37 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CalendarAgentLink.framework/Versions/A/CalendarAgentLink
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarAgentLink/ABRemoteGroup.h>

@class NSData;

@interface ABRemoteSmartGroup : ABRemoteGroup {

	NSData* _searchElement;

}

@property (retain) NSData * searchElement;              //@synthesize searchElement=_searchElement - In the implementation block
+(id)abEntityName;
+(char)supportsSecureCoding;
-(void)nts_SetSingleValue:(id)arg1 forProperty:(id)arg2 ;
-(id)nts_SingleValueForProperty:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setSearchElement:(NSData *)arg1 ;
-(NSData *)searchElement;
@end

