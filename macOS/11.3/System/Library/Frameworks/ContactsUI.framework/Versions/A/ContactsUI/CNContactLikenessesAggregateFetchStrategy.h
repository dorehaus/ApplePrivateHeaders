/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:47 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/Versions/A/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNContactLikenessesFetchStrategy.h>

@class NSArray, NSString;

@interface CNContactLikenessesAggregateFetchStrategy : NSObject <CNContactLikenessesFetchStrategy> {

	NSArray* _fetchStrategies;

}

@property (nonatomic,retain) NSArray * fetchStrategies;              //@synthesize fetchStrategies=_fetchStrategies - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)contactLikenessModelObservablesFromFetchStrategies:(id)arg1 ;
+(id)aggregateContactLikenessModelFromModels:(id)arg1 ;
-(NSString *)description;
-(NSArray *)fetchStrategies;
-(id)contactLikenessesModel;
-(id)initWithFetchStrategies:(id)arg1 ;
-(void)setFetchStrategies:(NSArray *)arg1 ;
@end
