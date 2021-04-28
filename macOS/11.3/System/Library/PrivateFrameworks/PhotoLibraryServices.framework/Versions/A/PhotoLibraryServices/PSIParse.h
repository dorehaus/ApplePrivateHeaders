/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:02 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/Versions/A/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@class NSArray, NSString, PSIDateFilter;

@interface PSIParse : NSObject {

	NSArray* _tokens;
	NSString* _string;
	PSIDateFilter* _dateFilter;

}

@property (nonatomic,readonly) unsigned long long numberOfTokens; 
@property (nonatomic,copy) PSIDateFilter * dateFilter;                         //@synthesize dateFilter=_dateFilter - In the implementation block
@property (nonatomic,readonly) NSArray * datedTokens; 
-(id)description;
-(id)initWithToken:(id)arg1 ;
-(id)tokenAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)numberOfTokens;
-(void)enumerateTokensUsingBlock:(/*^block*/id)arg1 ;
-(id)parseByReplacingTokensInRange:(NSRange)arg1 withTokens:(id)arg2 ;
-(PSIDateFilter *)dateFilter;
-(id)parseByReplacingTokenAtIndex:(unsigned long long)arg1 withToken:(id)arg2 ;
-(void)setDateFilter:(PSIDateFilter *)arg1 ;
-(NSArray *)datedTokens;
-(id)initWithTokens:(id)arg1 fromString:(id)arg2 ;
-(id)descriptionWithToken:(id)arg1 ;
@end

