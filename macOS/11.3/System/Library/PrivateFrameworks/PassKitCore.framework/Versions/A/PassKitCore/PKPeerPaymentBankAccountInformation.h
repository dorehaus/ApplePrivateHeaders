/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:40 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/Versions/A/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKBankAccountInformation.h>

@interface PKPeerPaymentBankAccountInformation : PKBankAccountInformation
-(id)init;
-(void)setAccountNumber:(id)arg1 ;
-(void)setRoutingNumber:(id)arg1 ;
-(void)setBankName:(id)arg1 ;
-(void)updateToLatestKeychainData;
-(void)deleteAllBankInformation;
-(id)_wrapperWithType:(unsigned long long)arg1 ;
-(void)deleteAllLocalBankInformation;
-(id)_bankAccountInformationInKeychain;
-(void)_writeBankAccountInformationToKeychain;
@end

