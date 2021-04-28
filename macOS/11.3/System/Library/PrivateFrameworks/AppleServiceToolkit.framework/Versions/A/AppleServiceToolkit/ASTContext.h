/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AppleServiceToolkit.framework/Versions/A/AppleServiceToolkit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleServiceToolkit/AppleServiceToolkit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class ASTIdentity, ASTControlCommand;

@interface ASTContext : NSObject <NSCopying, NSSecureCoding> {

	char _testSuiteRunning;
	ASTIdentity* _identity;
	long long _clientStatus;
	long long _command;
	ASTControlCommand* _controlCommand;

}

@property (assign) long long clientStatus;                            //@synthesize clientStatus=_clientStatus - In the implementation block
@property (assign) long long command;                                 //@synthesize command=_command - In the implementation block
@property (assign) char testSuiteRunning;                             //@synthesize testSuiteRunning=_testSuiteRunning - In the implementation block
@property (readonly) ASTControlCommand * controlCommand;              //@synthesize controlCommand=_controlCommand - In the implementation block
@property (copy,readonly) ASTIdentity * identity;                     //@synthesize identity=_identity - In the implementation block
+(char)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(ASTIdentity *)identity;
-(id)initWithIdentity:(id)arg1 ;
-(long long)command;
-(void)setCommand:(long long)arg1 ;
-(ASTControlCommand *)controlCommand;
-(long long)clientStatus;
-(void)setClientStatus:(long long)arg1 ;
-(void)setTestSuiteRunning:(char)arg1 ;
-(char)testSuiteRunning;
@end
