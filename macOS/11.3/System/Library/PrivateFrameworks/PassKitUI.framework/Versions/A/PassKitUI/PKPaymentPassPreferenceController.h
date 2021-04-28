/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:32 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/Versions/A/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PKPaymentPreferenceController.h>

@class PKPaymentPreferenceContact, NSMutableDictionary;

@interface PKPaymentPassPreferenceController : PKPaymentPreferenceController {

	PKPaymentPreferenceContact* _billingPreference;
	NSMutableDictionary* _passUniqueIDToCardEntryMap;
	NSMutableDictionary* _passUniqueIDToAcceptedPaymentApplicationsMap;
	NSMutableDictionary* _passUniqueIDToUnavailablePaymentApplicationsMap;

}

@property (nonatomic,retain) PKPaymentPreferenceContact * billingPreference;                                     //@synthesize billingPreference=_billingPreference - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * passUniqueIDToCardEntryMap;                                   //@synthesize passUniqueIDToCardEntryMap=_passUniqueIDToCardEntryMap - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * passUniqueIDToAcceptedPaymentApplicationsMap;                 //@synthesize passUniqueIDToAcceptedPaymentApplicationsMap=_passUniqueIDToAcceptedPaymentApplicationsMap - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * passUniqueIDToUnavailablePaymentApplicationsMap;              //@synthesize passUniqueIDToUnavailablePaymentApplicationsMap=_passUniqueIDToUnavailablePaymentApplicationsMap - In the implementation block
-(void)setModel:(id)arg1 ;
-(void)updatePreferences;
-(void)_setupPreferences;
-(PKPaymentPreferenceContact *)billingPreference;
-(long long)numberOfMenuItemsInSection:(long long)arg1 ;
-(id)_acceptedPaymentApplicationsForPass:(id)arg1 ;
-(id)_unavailablePaymentApplicationsForPass:(id)arg1 ;
-(NSMutableDictionary *)passUniqueIDToCardEntryMap;
-(void)setPassUniqueIDToCardEntryMap:(NSMutableDictionary *)arg1 ;
-(void)setPassUniqueIDToAcceptedPaymentApplicationsMap:(NSMutableDictionary *)arg1 ;
-(void)setPassUniqueIDToUnavailablePaymentApplicationsMap:(NSMutableDictionary *)arg1 ;
-(id)_cardPreferenceForAcceptedPasses;
-(id)_cardPreferenceForUnavailablePasses;
-(void)setBillingPreference:(PKPaymentPreferenceContact *)arg1 ;
-(char)_shouldDisplayPaymentApplicationWithAcceptedApplicationsCount:(long long)arg1 unavailableApplicationsCount:(long long)arg2 ;
-(id)_unavailableReasonForPass:(id)arg1 ;
-(char)canSelectPreference:(id)arg1 preferenceIndex:(unsigned long long)arg2 subItemIndex:(unsigned long long)arg3 ;
-(NSMutableDictionary *)passUniqueIDToAcceptedPaymentApplicationsMap;
-(NSMutableDictionary *)passUniqueIDToUnavailablePaymentApplicationsMap;
-(long long)numberOfSubItemInPreference:(id)arg1 preferenceIndex:(long long)arg2 ;
-(id)titleForSubItemInPreference:(id)arg1 preferenceIndex:(long long)arg2 subItemIndex:(long long)arg3 ;
-(char)shouldEnableSubItemInPreference:(id)arg1 preferenceIndex:(long long)arg2 subItemIndex:(long long)arg3 ;
-(id)cardEntryForPass:(id)arg1 ;
@end
