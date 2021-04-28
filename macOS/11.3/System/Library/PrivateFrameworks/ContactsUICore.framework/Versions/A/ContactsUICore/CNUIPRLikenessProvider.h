/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:47 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/Versions/A/ContactsUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNUIPRLikenessProvider.h>

@class PRLikeness, NSString;

@interface CNUIPRLikenessProvider : NSObject <CNUIPRLikenessProvider> {

	PRLikeness* _likeness;

}

@property (nonatomic,readonly) PRLikeness * likeness;               //@synthesize likeness=_likeness - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(PRLikeness *)likeness;
-(id)initWithPRLikeness:(id)arg1 ;
-(id)_cnui_likeness;
-(unsigned long long)_cnui_likenessType;
@end
