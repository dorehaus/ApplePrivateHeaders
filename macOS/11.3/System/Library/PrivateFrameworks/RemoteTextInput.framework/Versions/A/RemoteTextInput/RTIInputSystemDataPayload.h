/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:44 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/RemoteTextInput.framework/Versions/A/RemoteTextInput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RemoteTextInput/RTIDataPayload.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class RTIDocumentTraits, RTIDocumentState, RTITextOperations, NSUUID;

@interface RTIInputSystemDataPayload : RTIDataPayload <NSSecureCoding> {

	char _disableUpdate;
	RTIDocumentTraits* _documentTraits;
	RTIDocumentState* _documentState;
	RTITextOperations* _textOperations;
	NSUUID* _sessionUUID;

}

@property (nonatomic,retain) RTIDocumentTraits * documentTraits;              //@synthesize documentTraits=_documentTraits - In the implementation block
@property (nonatomic,retain) RTIDocumentState * documentState;                //@synthesize documentState=_documentState - In the implementation block
@property (nonatomic,retain) RTITextOperations * textOperations;              //@synthesize textOperations=_textOperations - In the implementation block
@property (nonatomic,retain) NSUUID * sessionUUID;                            //@synthesize sessionUUID=_sessionUUID - In the implementation block
+(char)supportsSecureCoding;
+(id)payloadWithData:(id)arg1 ;
+(id)payloadWithData:(id)arg1 version:(unsigned long long)arg2 ;
-(id)data;
-(id)initWithCoder:(id)arg1 ;
-(void)updateData;
-(RTITextOperations *)textOperations;
-(RTIDocumentState *)documentState;
-(RTIDocumentTraits *)documentTraits;
-(void)setSessionUUID:(NSUUID *)arg1 ;
-(NSUUID *)sessionUUID;
-(void)setTextOperations:(RTITextOperations *)arg1 ;
-(void)setDocumentTraits:(RTIDocumentTraits *)arg1 ;
-(void)setDocumentState:(RTIDocumentState *)arg1 ;
-(void)_unarchiveData;
@end
