/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/UserManagement.framework/Versions/A/UserManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface UMMobileKeyBag : NSObject
+(void)initialize;
+(char)inSyncBubble;
+(id)currentPersona;
+(int)_foregroundUID;
+(char)isMultiUser;
+(id)currentSyncBubbleUser;
+(id)allSyncBubbleUsers;
+(char)_start:(char)arg1 syncBubbleForUser:(id)arg2 outError:(id*)arg3 ;
+(unsigned long long)userType;
+(unsigned long long)maxNumberOfUsers;
+(unsigned long long)userQuotaSize;
+(unsigned)lastLoggedInUID;
+(id)currentUser;
+(id)loginUser;
+(id)lastLoggedInUser;
+(id)allUsers;
+(char)adoptPersonaVoucherForAccoutID:(id)arg1 outError:(id*)arg2 ;
+(id)currentUserSwitchContext;
+(void)currentUserSwitchContextHasBeenUsed;
+(id)loadUser:(id)arg1 withPasscodeData:(id)arg2 ;
+(id)deleteUser:(id)arg1 ;
+(id)userFromAttributes:(id)arg1 ;
+(char)fetchAttributesForUser:(id)arg1 outError:(id*)arg2 ;
+(char)isLoginSession;
+(void)updateLoginSessionType;
+(char)writeAttributesToDiskForUser:(id)arg1 outError:(id*)arg2 ;
+(id)personaSpecForUser:(id)arg1 ;
+(double)passcodeBackOffIntervalForUser:(id)arg1 ;
+(id)taskFromDictionaryRepresentation:(id)arg1 ;
+(id)dictionaryRepresentationOfTask:(id)arg1 ;
+(id)queuedSyncBubbleUsers;
+(id)syncBubbleMachServiceNamesForUser:(id)arg1 ;
+(char)startSyncBubbleForUser:(id)arg1 outError:(id*)arg2 ;
+(char)stopSyncBubbleForUser:(id)arg1 outError:(id*)arg2 ;
+(char)clearSyncBubblesWithOutError:(id*)arg1 ;
@end

