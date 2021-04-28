/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AddressBook/CNUIUndoableCommand.h>

@class CNDonationStore, CNLabeledValue;

@interface CNUIRejectDonatedValueCommand : CNUIUndoableCommand {

	CNDonationStore* _donationStore;
	CNLabeledValue* _donatedValueToReject;

}

@property (nonatomic,retain) CNDonationStore * donationStore;                    //@synthesize donationStore=_donationStore - In the implementation block
@property (nonatomic,retain) CNLabeledValue * donatedValueToReject;              //@synthesize donatedValueToReject=_donatedValueToReject - In the implementation block
-(CNDonationStore *)donationStore;
-(id)initWithContactStore:(id)arg1 ignoresGuardianRestrictions:(char)arg2 ;
-(void)executeWithCNSaveRequest:(id)arg1 ;
-(id)initWithContactStore:(id)arg1 donationStore:(id)arg2 donatedValueToReject:(id)arg3 ignoresGuardianRestrictions:(char)arg4 ;
-(CNLabeledValue *)donatedValueToReject;
-(void)setDonationStore:(CNDonationStore *)arg1 ;
-(void)setDonatedValueToReject:(CNLabeledValue *)arg1 ;
@end

