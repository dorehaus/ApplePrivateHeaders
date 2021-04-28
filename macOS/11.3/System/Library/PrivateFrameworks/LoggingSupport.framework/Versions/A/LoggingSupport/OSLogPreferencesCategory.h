/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:53 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/LoggingSupport.framework/Versions/A/LoggingSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, OSLogPreferencesSubsystem;

@interface OSLogPreferencesCategory : NSObject {

	NSString* _name;
	OSLogPreferencesSubsystem* _subsystem;

}

@property (nonatomic,readonly) NSString * name;                                    //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) OSLogPreferencesSubsystem * subsystem;              //@synthesize subsystem=_subsystem - In the implementation block
@property (nonatomic,readonly) char isLocked; 
@property (nonatomic,readonly) long long effectiveEnabledLevel; 
@property (nonatomic,readonly) long long effectivePersistedLevel; 
@property (assign,nonatomic) long long enabledLevel; 
@property (assign,nonatomic) long long persistedLevel; 
@property (assign,nonatomic) char signpostEnabled; 
@property (assign,nonatomic) char signpostPersisted; 
-(long long)defaultEnabledLevel;
-(long long)defaultPersistedLevel;
-(char)signpostEnabled;
-(char)signpostPersisted;
-(void)setSignpostEnabled:(char)arg1 ;
-(void)setSignpostPersisted:(char)arg1 ;
-(NSString *)name;
-(void)reset;
-(char)isLocked;
-(OSLogPreferencesSubsystem *)subsystem;
-(long long)effectiveEnabledLevel;
-(long long)effectivePersistedLevel;
-(long long)enabledLevel;
-(void)setEnabledLevel:(long long)arg1 ;
-(long long)persistedLevel;
-(void)setPersistedLevel:(long long)arg1 ;
-(id)initWithName:(id)arg1 subsystem:(id)arg2 ;
@end

