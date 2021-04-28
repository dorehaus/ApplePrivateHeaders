/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:40 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/Versions/A/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface PKPaymentTransactionPresentationInformation : NSObject {

	char _destructiveSecondaryString;
	char _shouldGrayValue;
	char _shouldStrikeValue;
	char _shouldShowDisclosure;
	NSString* _primaryString;
	NSString* _secondaryString;
	NSString* _tertiaryString;
	NSString* _rewardsString;
	NSString* _valueString;

}

@property (nonatomic,retain) NSString * primaryString;                     //@synthesize primaryString=_primaryString - In the implementation block
@property (nonatomic,retain) NSString * secondaryString;                   //@synthesize secondaryString=_secondaryString - In the implementation block
@property (nonatomic,retain) NSString * tertiaryString;                    //@synthesize tertiaryString=_tertiaryString - In the implementation block
@property (assign,nonatomic) char destructiveSecondaryString;              //@synthesize destructiveSecondaryString=_destructiveSecondaryString - In the implementation block
@property (nonatomic,retain) NSString * rewardsString;                     //@synthesize rewardsString=_rewardsString - In the implementation block
@property (nonatomic,retain) NSString * valueString;                       //@synthesize valueString=_valueString - In the implementation block
@property (assign,nonatomic) char shouldGrayValue;                         //@synthesize shouldGrayValue=_shouldGrayValue - In the implementation block
@property (assign,nonatomic) char shouldStrikeValue;                       //@synthesize shouldStrikeValue=_shouldStrikeValue - In the implementation block
@property (assign,nonatomic) char shouldShowDisclosure;                    //@synthesize shouldShowDisclosure=_shouldShowDisclosure - In the implementation block
-(NSString *)primaryString;
-(NSString *)valueString;
-(void)setValueString:(NSString *)arg1 ;
-(char)shouldShowDisclosure;
-(void)setPrimaryString:(NSString *)arg1 ;
-(NSString *)secondaryString;
-(void)setSecondaryString:(NSString *)arg1 ;
-(NSString *)tertiaryString;
-(void)setTertiaryString:(NSString *)arg1 ;
-(char)destructiveSecondaryString;
-(void)setDestructiveSecondaryString:(char)arg1 ;
-(NSString *)rewardsString;
-(void)setRewardsString:(NSString *)arg1 ;
-(char)shouldGrayValue;
-(void)setShouldGrayValue:(char)arg1 ;
-(char)shouldStrikeValue;
-(void)setShouldStrikeValue:(char)arg1 ;
-(void)setShouldShowDisclosure:(char)arg1 ;
@end

