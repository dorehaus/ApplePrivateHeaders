/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AddressBookCore/ABBookUndoableCommand.h>

@protocol ABCardViewDataSourceProvider;
@interface ABCardViewEditDisplayStyleCommand : ABBookUndoableCommand {

	id<ABCardViewDataSourceProvider> _dataSourceProvider;
	unsigned long long _oldStyle;
	unsigned long long _updatedStyle;

}

@property (nonatomic,readonly) id<ABCardViewDataSourceProvider> dataSourceProvider;              //@synthesize dataSourceProvider=_dataSourceProvider - In the implementation block
@property (nonatomic,readonly) unsigned long long oldStyle;                                      //@synthesize oldStyle=_oldStyle - In the implementation block
@property (nonatomic,readonly) unsigned long long updatedStyle;                                  //@synthesize updatedStyle=_updatedStyle - In the implementation block
-(void)execute;
-(void)executeUndo;
-(id)initWithDataSourceProvider:(id)arg1 oldStyle:(unsigned long long)arg2 updatedStyle:(unsigned long long)arg3 ;
-(unsigned long long)oldStyle;
-(unsigned long long)updatedStyle;
-(id<ABCardViewDataSourceProvider>)dataSourceProvider;
@end

