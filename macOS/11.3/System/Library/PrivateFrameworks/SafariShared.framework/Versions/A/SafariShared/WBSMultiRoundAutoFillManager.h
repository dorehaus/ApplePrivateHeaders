/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/Versions/A/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class WBSFormMetadata, NSTimer, NSMutableSet, NSString, NSSet;

@interface WBSMultiRoundAutoFillManager : NSObject {

	unsigned long long _autoFillAttemptTrigger;
	WBSFormMetadata* _formMetadataFromPreviousAutoFillAttempt;
	char _userDidInteractWithForm;
	unsigned long long _numberOfFollowUpAutoFillAttempts;
	NSTimer* _timerForFollowUpAutoFill;
	NSMutableSet* _controlUniqueIDToBeIgnoredByFollowUpAutoFill;
	NSString* _addressSetLabelUsedDuringFirstAutoFillPass;
	NSSet* _addressBookPropertiesThatCanBeFilled;

}

@property (nonatomic,copy) NSString * addressSetLabelUsedDuringFirstAutoFillPass;              //@synthesize addressSetLabelUsedDuringFirstAutoFillPass=_addressSetLabelUsedDuringFirstAutoFillPass - In the implementation block
@property (nonatomic,copy) NSSet * addressBookPropertiesThatCanBeFilled;                       //@synthesize addressBookPropertiesThatCanBeFilled=_addressBookPropertiesThatCanBeFilled - In the implementation block
-(void)dealloc;
-(id)init;
-(unsigned long long)currentAutoFillAttemptTrigger;
-(char)shouldControlBeIgnoredByFollowUpAutoFill:(id)arg1 ;
-(NSString *)addressSetLabelUsedDuringFirstAutoFillPass;
-(NSSet *)addressBookPropertiesThatCanBeFilled;
-(void)addControlUniqueIDIgnoredByFollowUpAutoFill:(id)arg1 ;
-(void)dispatchFollowUpAutoFillOfFormWithMetdata:(id)arg1 autoFillBlock:(/*^block*/id)arg2 ;
-(void)didEditFormText;
-(char)shouldAttemptFollowUpAutoFillInFormWithMetadata:(id)arg1 requestType:(unsigned long long)arg2 ;
-(void)addControlUniqueIDsIgnoredByFollowUpAutoFill:(id)arg1 ;
-(void)setAddressBookPropertiesThatCanBeFilled:(NSSet *)arg1 ;
-(void)setAddressSetLabelUsedDuringFirstAutoFillPass:(NSString *)arg1 ;
@end

