/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/Versions/A/EmailFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol EFSQLExpressable;
@class NSString;

@interface EFSQLIndexedColumnSchema : NSObject {

	id<EFSQLExpressable> _expression;
	unsigned long long _collation;
	unsigned long long _orderDirection;

}

@property (nonatomic,readonly) id<EFSQLExpressable> expression;                //@synthesize expression=_expression - In the implementation block
@property (nonatomic,readonly) unsigned long long collation;                   //@synthesize collation=_collation - In the implementation block
@property (nonatomic,readonly) unsigned long long orderDirection;              //@synthesize orderDirection=_orderDirection - In the implementation block
@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,copy,readonly) NSString * definition; 
-(NSString *)name;
-(id)initWithExpression:(id)arg1 ;
-(NSString *)definition;
-(unsigned long long)collation;
-(id<EFSQLExpressable>)expression;
-(id)initWithExpression:(id)arg1 collation:(unsigned long long)arg2 orderDirection:(unsigned long long)arg3 ;
-(id)initWithExpression:(id)arg1 orderDirection:(unsigned long long)arg2 ;
-(id)initWithColumnName:(id)arg1 collation:(unsigned long long)arg2 orderDirection:(unsigned long long)arg3 ;
-(id)initWithColumnName:(id)arg1 orderDirection:(unsigned long long)arg2 ;
-(unsigned long long)orderDirection;
-(id)initWithColumnName:(id)arg1 ;
@end

