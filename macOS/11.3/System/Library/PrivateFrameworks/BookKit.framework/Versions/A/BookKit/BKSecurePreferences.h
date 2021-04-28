/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:33 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/BookKit.framework/Versions/A/BookKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol BKSecurePreferencesDelegate;
@interface BKSecurePreferences : NSObject {

	id<BKSecurePreferencesDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<BKSecurePreferencesDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) char explicitContentRestricted; 
@property (nonatomic,readonly) char bookstoreDisabled; 
-(void)dealloc;
-(id)init;
-(id<BKSecurePreferencesDelegate>)delegate;
-(void)setDelegate:(id<BKSecurePreferencesDelegate>)arg1 ;
-(void)_systemProfilePreferencesDidChange:(id)arg1 ;
-(char)_parentalPreferenceIsForcedForKey:(id)arg1 ;
-(char)bookstoreDisabled;
-(char)explicitContentRestricted;
@end

