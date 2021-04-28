/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:54 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/Versions/A/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreFoundation/CoreFoundation-Structs.h>
@interface NSUserDefaults : NSObject {

	id _kvo_;
	CFStringRef _identifier_;
	CFStringRef _container_;
	void** _reserved[2];

}
+(id)standardUserDefaults;
+(void)setStandardUserDefaults:(id)arg1 ;
+(void)resetStandardUserDefaults;
+(id)_copyStandardUserDefaultsIfPresent;
+(void)_ensureAndLockPreferredLanguageLock;
+(void)_web_addDefaultsChangeObserver;
+(void)_web_defaultsDidChange;
+(id)_web_preferredLanguageCode;
-(void)finalize;
-(void)dealloc;
-(id)init;
-(id)objectForKey:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(char)synchronize;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(char)boolForKey:(id)arg1 ;
-(id)valueForKey:(id)arg1 ;
-(id)URLForKey:(id)arg1 ;
-(id)stringForKey:(id)arg1 ;
-(id)arrayForKey:(id)arg1 ;
-(id)dictionaryForKey:(id)arg1 ;
-(long long)integerForKey:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)_willBeginKeyValueObserving;
-(void)_didEndKeyValueObserving;
-(void)setObject:(id)arg1 forKey:(id)arg2 inDomain:(id)arg3 ;
-(id)initWithSuiteName:(id)arg1 ;
-(id)_initWithSuiteName:(id)arg1 container:(id)arg2 ;
-(id)initWithUser:(id)arg1 ;
-(void)setPersistentDomain:(id)arg1 forName:(id)arg2 ;
-(id)objectForKey:(id)arg1 inDomain:(id)arg2 ;
-(void)removeObjectForKey:(id)arg1 inDomain:(id)arg2 ;
-(id)dataForKey:(id)arg1 ;
-(id)stringArrayForKey:(id)arg1 ;
-(long long)longForKey:(id)arg1 ;
-(float)floatForKey:(id)arg1 ;
-(double)doubleForKey:(id)arg1 ;
-(void)setInteger:(long long)arg1 forKey:(id)arg2 ;
-(void)setLong:(long long)arg1 forKey:(id)arg2 ;
-(void)setFloat:(float)arg1 forKey:(id)arg2 ;
-(void)setDouble:(double)arg1 forKey:(id)arg2 ;
-(void)setBool:(char)arg1 forKey:(id)arg2 ;
-(void)setURL:(id)arg1 forKey:(id)arg2 ;
-(id)searchList;
-(void)setSearchList:(id)arg1 ;
-(void)addSuiteNamed:(id)arg1 ;
-(void)removeSuiteNamed:(id)arg1 ;
-(void)registerDefaults:(id)arg1 ;
-(id)volatileDomainNames;
-(id)volatileDomainForName:(id)arg1 ;
-(void)setVolatileDomain:(id)arg1 forName:(id)arg2 ;
-(void)removeVolatileDomainForName:(id)arg1 ;
-(id)persistentDomainNames;
-(id)persistentDomainForName:(id)arg1 ;
-(void)removePersistentDomainForName:(id)arg1 ;
-(char)objectIsForcedForKey:(id)arg1 ;
-(char)objectIsForcedForKey:(id)arg1 inDomain:(id)arg2 ;
-(CFStringRef)_container;
-(CFStringRef)_identifier;
-(void)_setIdentifier:(CFStringRef)arg1 ;
-(void)_setContainer:(CFURLRef)arg1 ;
-(char)_observingCFPreferences;
@end

