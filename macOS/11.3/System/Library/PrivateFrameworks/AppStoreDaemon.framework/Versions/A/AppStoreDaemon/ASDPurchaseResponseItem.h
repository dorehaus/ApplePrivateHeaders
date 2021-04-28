/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/Versions/A/AppStoreDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppStoreDaemon/AppStoreDaemon-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSError, ASDPurchase, NSString, NSArray, NSDictionary;

@interface ASDPurchaseResponseItem : NSObject <NSSecureCoding> {

	char _success;
	char _cancelsPurchaseBatch;
	NSError* _error;
	ASDPurchase* _purchase;
	NSString* _bundleID;
	NSArray* _results;
	double _requestStartTime;
	double _responseEndTime;
	double _responseStartTime;
	NSDictionary* _responseMetrics;
	NSDictionary* _transationIDs;

}

@property (assign,nonatomic) double requestStartTime;                       //@synthesize requestStartTime=_requestStartTime - In the implementation block
@property (assign,nonatomic) double responseEndTime;                        //@synthesize responseEndTime=_responseEndTime - In the implementation block
@property (assign,nonatomic) double responseStartTime;                      //@synthesize responseStartTime=_responseStartTime - In the implementation block
@property (nonatomic,readonly) NSDictionary * responseMetrics;              //@synthesize responseMetrics=_responseMetrics - In the implementation block
@property (nonatomic,readonly) NSDictionary * transationIDs;                //@synthesize transationIDs=_transationIDs - In the implementation block
@property (nonatomic,readonly) NSError * error;                             //@synthesize error=_error - In the implementation block
@property (nonatomic,copy,readonly) ASDPurchase * purchase;                 //@synthesize purchase=_purchase - In the implementation block
@property (nonatomic,copy,readonly) NSString * bundleID;                    //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,readonly) NSArray * results;                           //@synthesize results=_results - In the implementation block
@property (nonatomic,readonly) char success;                                //@synthesize success=_success - In the implementation block
@property (nonatomic,readonly) char cancelsPurchaseBatch;                   //@synthesize cancelsPurchaseBatch=_cancelsPurchaseBatch - In the implementation block
+(char)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSError *)error;
-(NSString *)bundleID;
-(NSArray *)results;
-(void)_setError:(id)arg1 ;
-(char)success;
-(id)initWithResults:(id)arg1 ;
-(ASDPurchase *)purchase;
-(void)setRequestStartTime:(double)arg1 ;
-(void)setResponseEndTime:(double)arg1 ;
-(void)setResponseStartTime:(double)arg1 ;
-(double)requestStartTime;
-(double)responseEndTime;
-(double)responseStartTime;
-(id)transactionIdentifierForItemIdentifier:(long long)arg1 ;
-(void)_setBundleID:(id)arg1 ;
-(void)_setPurchase:(id)arg1 ;
-(void)_setResponseMetrics:(id)arg1 ;
-(void)_setSuccess:(char)arg1 ;
-(void)_setTransactionIDs:(id)arg1 ;
-(char)cancelsPurchaseBatch;
-(NSDictionary *)responseMetrics;
-(NSDictionary *)transationIDs;
@end

