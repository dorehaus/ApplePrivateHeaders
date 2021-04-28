/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AddressBookCore.framework/Versions/A/AddressBookCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ABAccountSearchPolicy.h>

@protocol ABAccountConfigurationInternal;
@class NSString;

@interface ABDynamicAccountSearchPolicy : NSObject <ABAccountSearchPolicy> {

	id<ABAccountConfigurationInternal> _accountConfiguration;
	Class _searchOperationClass;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(char)isSearchable;
-(id)initWithAccountConfiguration:(id)arg1 searchOperationClass:(Class)arg2 ;
-(id)makeSearchOperation;
-(Class)searchOperationClass;
@end

