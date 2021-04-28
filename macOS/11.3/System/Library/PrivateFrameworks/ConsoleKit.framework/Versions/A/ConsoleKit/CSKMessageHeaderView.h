/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ConsoleKit.framework/Versions/A/ConsoleKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ConsoleKit/CSKHeaderView.h>

@class CSKExtendedTextField, NSTextField, CSKBadgeLabel;

@interface CSKMessageHeaderView : CSKHeaderView {

	CSKExtendedTextField* _processTextField;
	NSTextField* _subsystemTextField;
	NSTextField* _categoryTextField;
	NSTextField* _timeTextField;
	NSTextField* _volatileBadgeLabel;
	CSKBadgeLabel* _typeBadgeLabel;

}

@property (assign,nonatomic,__weak) CSKExtendedTextField * processTextField;              //@synthesize processTextField=_processTextField - In the implementation block
@property (assign,nonatomic,__weak) NSTextField * subsystemTextField;                     //@synthesize subsystemTextField=_subsystemTextField - In the implementation block
@property (assign,nonatomic,__weak) NSTextField * categoryTextField;                      //@synthesize categoryTextField=_categoryTextField - In the implementation block
@property (assign,nonatomic,__weak) NSTextField * timeTextField;                          //@synthesize timeTextField=_timeTextField - In the implementation block
@property (assign,nonatomic,__weak) NSTextField * volatileBadgeLabel;                     //@synthesize volatileBadgeLabel=_volatileBadgeLabel - In the implementation block
@property (assign,nonatomic,__weak) CSKBadgeLabel * typeBadgeLabel;                       //@synthesize typeBadgeLabel=_typeBadgeLabel - In the implementation block
-(NSTextField *)timeTextField;
-(CSKExtendedTextField *)processTextField;
-(NSTextField *)subsystemTextField;
-(NSTextField *)categoryTextField;
-(NSTextField *)volatileBadgeLabel;
-(CSKBadgeLabel *)typeBadgeLabel;
-(void)updateViewWithMessage:(id)arg1 ;
-(void)setProcessTextField:(CSKExtendedTextField *)arg1 ;
-(void)setSubsystemTextField:(NSTextField *)arg1 ;
-(void)setCategoryTextField:(NSTextField *)arg1 ;
-(void)setTimeTextField:(NSTextField *)arg1 ;
-(void)setVolatileBadgeLabel:(NSTextField *)arg1 ;
-(void)setTypeBadgeLabel:(CSKBadgeLabel *)arg1 ;
@end

