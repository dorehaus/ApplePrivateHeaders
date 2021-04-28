/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AddressBookCore.framework/Versions/A/AddressBookCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ABPropertySummaryBuilding.h>

@class NSMutableDictionary, NSString;

@interface ABPropertySummaryBuilder : NSObject <ABPropertySummaryBuilding> {

	NSMutableDictionary* _builders;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
-(id)builderForProperty:(id)arg1 ;
-(id)buildSummaryForValue:(id)arg1 property:(id)arg2 ;
-(id)makeBuilderForProperty:(id)arg1 ;
@end

