/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AddressBookCore.framework/Versions/A/AddressBookCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AddressBookCore/ABMetadataOperation.h>

@class NSArray;

@interface ABMetadataMarkViewedOperation : ABMetadataOperation {

	NSArray* _uniqueIds;
	char _oneShot;

}
-(void)main;
-(id)initWithMetadataManager:(id)arg1 recordUniqueIds:(id)arg2 ;
-(void)markOneShot;
-(int)metadataJobType;
-(void)_markViewedForPeople:(id)arg1 ;
@end

