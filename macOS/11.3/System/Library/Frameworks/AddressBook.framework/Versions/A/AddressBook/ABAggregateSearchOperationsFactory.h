/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ABSearchOperationsFactory.h>

@class NSArray, NSString;

@interface ABAggregateSearchOperationsFactory : NSObject <ABSearchOperationsFactory> {

	NSArray* _searchOperationsFactories;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)searchOperationsForString:(id)arg1 addressBook:(id)arg2 delegate:(id)arg3 ;
-(id)initWithSearchOperationsFactories:(id)arg1 ;
@end

