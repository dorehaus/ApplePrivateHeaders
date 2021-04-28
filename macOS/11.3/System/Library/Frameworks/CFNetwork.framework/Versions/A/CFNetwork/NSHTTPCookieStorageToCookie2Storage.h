/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:02 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/Versions/A/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CFNetwork/CFNetwork-Structs.h>
#import <CFNetwork/NSHTTPCookieStorage.h>

@class NSHTTPCookie2Storage;

@interface NSHTTPCookieStorageToCookie2Storage : NSHTTPCookieStorage {

	unsigned long long _acceptPolicy;
	char _behavesLikeNS;
	NSHTTPCookie2Storage* _store;

}
-(void)_testingOfStoringOfCookie:(id)arg1 ;
-(void)storeCookies:(id)arg1 forTask:(id)arg2 ;
-(void)getCookiesForTask:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_cookiesForURL:(id)arg1 mainDocumentURL:(id)arg2 ;
-(void)_getCookiesForPartition:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_setPrivateBrowsingEnabled:(char)arg1 ;
-(void)dealloc;
-(id)init;
-(id)cookiesForURL:(id)arg1 ;
-(void)deleteCookie:(id)arg1 ;
-(OpaqueCFHTTPCookieStorageRef)_cookieStorage;
-(id)cookies;
-(void)setCookie:(id)arg1 ;
-(id)_initWithIdentifier:(id)arg1 private:(BOOL)arg2 ;
-(void)setCookieAcceptPolicy:(unsigned long long)arg1 ;
-(id)_initWithCFHTTPCookieStorage:(OpaqueCFHTTPCookieStorageRef)arg1 ;
-(void)_saveCookies:(/*^block*/id)arg1 ;
-(void)_saveCookies;
-(void)setCookies:(id)arg1 forURL:(id)arg2 mainDocumentURL:(id)arg3 ;
-(unsigned long long)cookieAcceptPolicy;
-(void)_setCookies:(id)arg1 forURL:(id)arg2 mainDocumentURL:(id)arg3 policyProperties:(id)arg4 ;
-(void)removeCookiesSinceDate:(id)arg1 ;
-(void)_getCookiesForURL:(id)arg1 mainDocumentURL:(id)arg2 partition:(id)arg3 policyProperties:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)_getCookiesForURL:(id)arg1 mainDocumentURL:(id)arg2 partition:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
@end

