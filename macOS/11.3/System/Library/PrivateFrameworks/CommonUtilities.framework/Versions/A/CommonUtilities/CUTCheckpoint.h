/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CommonUtilities.framework/Versions/A/CommonUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CommonUtilities/CommonUtilities-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface CUTCheckpoint : NSObject <NSSecureCoding, NSCopying> {

	char _frozen;
	char _assertsUseAfterFreeze;
	char _shouldLogTouches;
	NSString* _name;
	NSString* _uniqueIdentifier;

}

@property (nonatomic,readonly) NSString * name;                          //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSString * uniqueIdentifier;              //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (assign,nonatomic) char assertsUseAfterFreeze;                 //@synthesize assertsUseAfterFreeze=_assertsUseAfterFreeze - In the implementation block
@property (assign,nonatomic) char shouldLogTouches;                      //@synthesize shouldLogTouches=_shouldLogTouches - In the implementation block
+(id)_reportDateFormatter;
+(char)supportsSecureCoding;
+(id)_whitelistedClasses;
-(id)initWithName:(id)arg1 uniqueIdentifier:(id)arg2 ;
-(char)_assertNotFrozen;
-(char)assertsUseAfterFreeze;
-(void)_appendReportToMutableString:(id)arg1 indentation:(long long)arg2 paddedNameLength:(long long)arg3 ;
-(id)_reportName;
-(id)_reportStartDate;
-(id)_reportEndDate;
-(id)_freezeBacktrace;
-(void)setAssertsUseAfterFreeze:(char)arg1 ;
-(void)setShouldLogTouches:(char)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(NSString *)name;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)uniqueIdentifier;
-(void)freeze;
-(char)shouldLogTouches;
-(id)_reportMetadata;
-(id)report;
-(char)isFrozen;
-(void)_freeze;
@end
