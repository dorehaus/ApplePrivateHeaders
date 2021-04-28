/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:36 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/EventKit.framework/Versions/A/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKit/EKGeneralLookupPredicate.h>

@class NSString;

@interface EKEWSItemIDPredicate : EKGeneralLookupPredicate {

	NSString* _itemID;

}
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)predicateFormat;
-(char)evaluateWithObject:(id)arg1 substitutionVariables:(id)arg2 ;
-(id)initWithItemID:(id)arg1 ;
-(id)predicateForCoreData;
@end

