/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CommerceKit.framework/Versions/A/CommerceKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CKAccountObserver.h>

@class NSString;

@interface CKAccountObserver : NSObject <CKAccountObserver> {

	/*^block*/id _primaryAccountChangeObserver;

}

@property (copy) id primaryAccountChangeObserver;                   //@synthesize primaryAccountChangeObserver=_primaryAccountChangeObserver - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)accountStore:(id)arg1 primaryAccountChanged:(id)arg2 ;
-(void)setPrimaryAccountChangeObserver:(id)arg1 ;
-(id)primaryAccountChangeObserver;
@end

