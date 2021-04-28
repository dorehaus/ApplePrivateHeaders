/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/Versions/A/AppStoreDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface ASDPurchaseHistoryQuerySortOption : NSObject <NSSecureCoding> {

	char _ascending;
	NSString* _name;

}

@property (copy) NSString * name;               //@synthesize name=_name - In the implementation block
@property (assign) char ascending;              //@synthesize ascending=_ascending - In the implementation block
+(char)supportsSecureCoding;
-(NSString *)name;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(char)ascending;
-(void)setAscending:(char)arg1 ;
-(id)initWithName:(id)arg1 ascending:(char)arg2 ;
@end

