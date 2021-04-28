/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ABCollectionMultiPropertyAction.h>

@class NSString, ABCollectionViewItem;

@interface ABBirthdayConversionUIAction : NSObject <ABCollectionMultiPropertyAction> {

	NSString* _targetPropertyKey;
	ABCollectionViewItem* _sourceItem;

}

@property (readonly) NSString * targetPropertyKey;                  //@synthesize targetPropertyKey=_targetPropertyKey - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)initWithCollectionViewItem:(id)arg1 targetPropertyKey:(id)arg2 ;
-(id)convertComponents:(id)arg1 ;
-(void)addConvertedBirthdayComponents:(id)arg1 ;
-(char)validateWithTarget:(id)arg1 ;
-(void)executeWithTarget:(id)arg1 delegate:(id)arg2 ;
-(id)titleForTarget:(id)arg1 ;
-(NSString *)targetPropertyKey;
@end
