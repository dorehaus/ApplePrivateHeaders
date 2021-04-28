/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:32 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/Versions/A/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/NSTableCellView.h>

@class NSTextField;

@interface PKTransactionsTableCellView : NSTableCellView {

	NSTextField* _nameLabel;
	NSTextField* _descriptionLabel;
	NSTextField* _amountLabel;

}

@property (retain) NSTextField * nameLabel;                     //@synthesize nameLabel=_nameLabel - In the implementation block
@property (retain) NSTextField * descriptionLabel;              //@synthesize descriptionLabel=_descriptionLabel - In the implementation block
@property (retain) NSTextField * amountLabel;                   //@synthesize amountLabel=_amountLabel - In the implementation block
-(NSTextField *)nameLabel;
-(void)setNameLabel:(NSTextField *)arg1 ;
-(void)setDescriptionLabel:(NSTextField *)arg1 ;
-(NSTextField *)descriptionLabel;
-(NSTextField *)amountLabel;
-(void)setAmountLabel:(NSTextField *)arg1 ;
@end

