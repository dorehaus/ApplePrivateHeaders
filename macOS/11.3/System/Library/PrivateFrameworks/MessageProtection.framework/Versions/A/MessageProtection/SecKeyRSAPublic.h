/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:21 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MessageProtection.framework/Versions/A/MessageProtection
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SecKeyRSAPublic : NSObject {

	id _secKeyRef;

}

@property (nonatomic,retain) id secKeyRef;              //@synthesize secKeyRef=_secKeyRef - In the implementation block
-(id)dataRepresentation;
-(id)initWithData:(id)arg1 error:(id*)arg2 ;
-(id)encryptData:(id)arg1 error:(id*)arg2 ;
-(id)secKeyRef;
-(void)setSecKeyRef:(id)arg1 ;
-(id)initWithSecKeyRef:(id)arg1 ;
@end

