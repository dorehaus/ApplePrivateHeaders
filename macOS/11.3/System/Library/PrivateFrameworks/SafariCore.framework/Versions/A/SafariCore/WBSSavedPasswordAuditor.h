/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SafariCore.framework/Versions/A/SafariCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class WBSSavedPasswordStore, WBSAutoFillQuirksManager;

@interface WBSSavedPasswordAuditor : NSObject {

	WBSSavedPasswordStore* _savedPasswordStore;
	WBSAutoFillQuirksManager* _autoFillQuirksManager;

}

@property (nonatomic,readonly) WBSSavedPasswordStore * savedPasswordStore;                    //@synthesize savedPasswordStore=_savedPasswordStore - In the implementation block
@property (nonatomic,readonly) WBSAutoFillQuirksManager * autoFillQuirksManager;              //@synthesize autoFillQuirksManager=_autoFillQuirksManager - In the implementation block
@property (nonatomic,readonly) char passwordStoreHasDuplicatedPasswords; 
-(id)init;
-(id)initWithSavedPasswordStore:(id)arg1 autoFillQuirksManager:(id)arg2 ;
-(id)savedPasswordsWithDuplicatedPassword:(id)arg1 ;
-(char)savedPasswordIsReused:(id)arg1 ;
-(WBSAutoFillQuirksManager *)autoFillQuirksManager;
-(WBSSavedPasswordStore *)savedPasswordStore;
-(id)duplicatePasswordsInPasswords:(id)arg1 ;
-(char)_savedPasswordQualifiesForReuseAuditing:(id)arg1 ;
-(char)_passwordIsReused:(id)arg1 byOtherSavedPassword:(id)arg2 ;
-(char)passwordStoreHasDuplicatedPasswords;
@end

