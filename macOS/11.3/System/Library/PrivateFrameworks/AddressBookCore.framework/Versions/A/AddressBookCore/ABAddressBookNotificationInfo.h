/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AddressBookCore.framework/Versions/A/AddressBookCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSArray, NSDate;

@interface ABAddressBookNotificationInfo : NSObject {

	NSMutableDictionary* _publicUserInfo;
	NSMutableDictionary* _privateUserInfo;
	NSArray* _affectedSources;
	NSDate* _modificationDate;
	char _couldAffectSync;
	char _shouldSyncWhenSaved;
	char _privateTablesChanged;
	char _successfullyPrepared;

}

@property (retain) NSMutableDictionary * publicUserInfo;               //@synthesize publicUserInfo=_publicUserInfo - In the implementation block
@property (retain) NSMutableDictionary * privateUserInfo;              //@synthesize privateUserInfo=_privateUserInfo - In the implementation block
@property (copy) NSArray * affectedSources;                            //@synthesize affectedSources=_affectedSources - In the implementation block
@property (copy) NSDate * modificationDate;                            //@synthesize modificationDate=_modificationDate - In the implementation block
@property (assign) char couldAffectSync;                               //@synthesize couldAffectSync=_couldAffectSync - In the implementation block
@property (assign) char shouldSyncWhenSaved;                           //@synthesize shouldSyncWhenSaved=_shouldSyncWhenSaved - In the implementation block
@property (assign) char privateTablesChanged;                          //@synthesize privateTablesChanged=_privateTablesChanged - In the implementation block
@property (assign) char successfullyPrepared;                          //@synthesize successfullyPrepared=_successfullyPrepared - In the implementation block
-(void)dealloc;
-(id)init;
-(NSDate *)modificationDate;
-(void)setModificationDate:(NSDate *)arg1 ;
-(NSMutableDictionary *)publicUserInfo;
-(void)setPublicUserInfo:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)privateUserInfo;
-(void)setPrivateUserInfo:(NSMutableDictionary *)arg1 ;
-(NSArray *)affectedSources;
-(void)setAffectedSources:(NSArray *)arg1 ;
-(char)couldAffectSync;
-(void)setCouldAffectSync:(char)arg1 ;
-(char)shouldSyncWhenSaved;
-(void)setShouldSyncWhenSaved:(char)arg1 ;
-(char)privateTablesChanged;
-(void)setPrivateTablesChanged:(char)arg1 ;
-(char)successfullyPrepared;
-(void)setSuccessfullyPrepared:(char)arg1 ;
@end

