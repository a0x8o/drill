/**
 * Licensed to the Apache Software Foundation (ASF) under one
 * or more contributor license agreements.  See the NOTICE file
 * distributed with this work for additional information
 * regarding copyright ownership.  The ASF licenses this file
 * to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance
 * with the License.  You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
// Generated by http://code.google.com/p/protostuff/ ... DO NOT EDIT!
// Generated from protobuf

package org.apache.drill.exec.proto;


public final class SchemaBitData
{

    public static final class BitClientHandshake
    {
        public static final org.apache.drill.exec.proto.SchemaBitData.BitClientHandshake.MessageSchema WRITE =
            new org.apache.drill.exec.proto.SchemaBitData.BitClientHandshake.MessageSchema();
        public static final org.apache.drill.exec.proto.SchemaBitData.BitClientHandshake.BuilderSchema MERGE =
            new org.apache.drill.exec.proto.SchemaBitData.BitClientHandshake.BuilderSchema();
        
        public static class MessageSchema implements com.dyuproject.protostuff.Schema<org.apache.drill.exec.proto.BitData.BitClientHandshake>
        {
            public void writeTo(com.dyuproject.protostuff.Output output, org.apache.drill.exec.proto.BitData.BitClientHandshake message) throws java.io.IOException
            {
                if(message.hasRpcVersion())
                    output.writeInt32(1, message.getRpcVersion(), false);
                if(message.hasChannel())
                    output.writeEnum(2, message.getChannel().getNumber(), false);
            }
            public boolean isInitialized(org.apache.drill.exec.proto.BitData.BitClientHandshake message)
            {
                return message.isInitialized();
            }
            public java.lang.String getFieldName(int number)
            {
                return org.apache.drill.exec.proto.SchemaBitData.BitClientHandshake.getFieldName(number);
            }
            public int getFieldNumber(java.lang.String name)
            {
                return org.apache.drill.exec.proto.SchemaBitData.BitClientHandshake.getFieldNumber(name);
            }
            public java.lang.Class<org.apache.drill.exec.proto.BitData.BitClientHandshake> typeClass()
            {
                return org.apache.drill.exec.proto.BitData.BitClientHandshake.class;
            }
            public java.lang.String messageName()
            {
                return org.apache.drill.exec.proto.BitData.BitClientHandshake.class.getSimpleName();
            }
            public java.lang.String messageFullName()
            {
                return org.apache.drill.exec.proto.BitData.BitClientHandshake.class.getName();
            }
            //unused
            public void mergeFrom(com.dyuproject.protostuff.Input input, org.apache.drill.exec.proto.BitData.BitClientHandshake message) throws java.io.IOException {}
            public org.apache.drill.exec.proto.BitData.BitClientHandshake newMessage() { return null; }
        }
        public static class BuilderSchema implements com.dyuproject.protostuff.Schema<org.apache.drill.exec.proto.BitData.BitClientHandshake.Builder>
        {
            public void mergeFrom(com.dyuproject.protostuff.Input input, org.apache.drill.exec.proto.BitData.BitClientHandshake.Builder builder) throws java.io.IOException
            {
                for(int number = input.readFieldNumber(this);; number = input.readFieldNumber(this))
                {
                    switch(number)
                    {
                        case 0:
                            return;
                        case 1:
                            builder.setRpcVersion(input.readInt32());
                            break;
                        case 2:
                            builder.setChannel(org.apache.drill.exec.proto.UserBitShared.RpcChannel.valueOf(input.readEnum()));
                            break;
                        default:
                            input.handleUnknownField(number, this);
                    }
                }
            }
            public boolean isInitialized(org.apache.drill.exec.proto.BitData.BitClientHandshake.Builder builder)
            {
                return builder.isInitialized();
            }
            public org.apache.drill.exec.proto.BitData.BitClientHandshake.Builder newMessage()
            {
                return org.apache.drill.exec.proto.BitData.BitClientHandshake.newBuilder();
            }
            public java.lang.String getFieldName(int number)
            {
                return org.apache.drill.exec.proto.SchemaBitData.BitClientHandshake.getFieldName(number);
            }
            public int getFieldNumber(java.lang.String name)
            {
                return org.apache.drill.exec.proto.SchemaBitData.BitClientHandshake.getFieldNumber(name);
            }
            public java.lang.Class<org.apache.drill.exec.proto.BitData.BitClientHandshake.Builder> typeClass()
            {
                return org.apache.drill.exec.proto.BitData.BitClientHandshake.Builder.class;
            }
            public java.lang.String messageName()
            {
                return org.apache.drill.exec.proto.BitData.BitClientHandshake.class.getSimpleName();
            }
            public java.lang.String messageFullName()
            {
                return org.apache.drill.exec.proto.BitData.BitClientHandshake.class.getName();
            }
            //unused
            public void writeTo(com.dyuproject.protostuff.Output output, org.apache.drill.exec.proto.BitData.BitClientHandshake.Builder builder) throws java.io.IOException {}
        }
        public static java.lang.String getFieldName(int number)
        {
            switch(number)
            {
                case 1: return "rpcVersion";
                case 2: return "channel";
                default: return null;
            }
        }
        public static int getFieldNumber(java.lang.String name)
        {
            java.lang.Integer number = fieldMap.get(name);
            return number == null ? 0 : number.intValue();
        }
        private static final java.util.HashMap<java.lang.String,java.lang.Integer> fieldMap = new java.util.HashMap<java.lang.String,java.lang.Integer>();
        static
        {
            fieldMap.put("rpcVersion", 1);
            fieldMap.put("channel", 2);
        }
    }

    public static final class BitServerHandshake
    {
        public static final org.apache.drill.exec.proto.SchemaBitData.BitServerHandshake.MessageSchema WRITE =
            new org.apache.drill.exec.proto.SchemaBitData.BitServerHandshake.MessageSchema();
        public static final org.apache.drill.exec.proto.SchemaBitData.BitServerHandshake.BuilderSchema MERGE =
            new org.apache.drill.exec.proto.SchemaBitData.BitServerHandshake.BuilderSchema();
        
        public static class MessageSchema implements com.dyuproject.protostuff.Schema<org.apache.drill.exec.proto.BitData.BitServerHandshake>
        {
            public void writeTo(com.dyuproject.protostuff.Output output, org.apache.drill.exec.proto.BitData.BitServerHandshake message) throws java.io.IOException
            {
                if(message.hasRpcVersion())
                    output.writeInt32(1, message.getRpcVersion(), false);
                for(String authenticationMechanisms : message.getAuthenticationMechanismsList())
                    output.writeString(2, authenticationMechanisms, true);
            }
            public boolean isInitialized(org.apache.drill.exec.proto.BitData.BitServerHandshake message)
            {
                return message.isInitialized();
            }
            public java.lang.String getFieldName(int number)
            {
                return org.apache.drill.exec.proto.SchemaBitData.BitServerHandshake.getFieldName(number);
            }
            public int getFieldNumber(java.lang.String name)
            {
                return org.apache.drill.exec.proto.SchemaBitData.BitServerHandshake.getFieldNumber(name);
            }
            public java.lang.Class<org.apache.drill.exec.proto.BitData.BitServerHandshake> typeClass()
            {
                return org.apache.drill.exec.proto.BitData.BitServerHandshake.class;
            }
            public java.lang.String messageName()
            {
                return org.apache.drill.exec.proto.BitData.BitServerHandshake.class.getSimpleName();
            }
            public java.lang.String messageFullName()
            {
                return org.apache.drill.exec.proto.BitData.BitServerHandshake.class.getName();
            }
            //unused
            public void mergeFrom(com.dyuproject.protostuff.Input input, org.apache.drill.exec.proto.BitData.BitServerHandshake message) throws java.io.IOException {}
            public org.apache.drill.exec.proto.BitData.BitServerHandshake newMessage() { return null; }
        }
        public static class BuilderSchema implements com.dyuproject.protostuff.Schema<org.apache.drill.exec.proto.BitData.BitServerHandshake.Builder>
        {
            public void mergeFrom(com.dyuproject.protostuff.Input input, org.apache.drill.exec.proto.BitData.BitServerHandshake.Builder builder) throws java.io.IOException
            {
                for(int number = input.readFieldNumber(this);; number = input.readFieldNumber(this))
                {
                    switch(number)
                    {
                        case 0:
                            return;
                        case 1:
                            builder.setRpcVersion(input.readInt32());
                            break;
                        case 2:
                            builder.addAuthenticationMechanisms(input.readString());
                            break;
                        default:
                            input.handleUnknownField(number, this);
                    }
                }
            }
            public boolean isInitialized(org.apache.drill.exec.proto.BitData.BitServerHandshake.Builder builder)
            {
                return builder.isInitialized();
            }
            public org.apache.drill.exec.proto.BitData.BitServerHandshake.Builder newMessage()
            {
                return org.apache.drill.exec.proto.BitData.BitServerHandshake.newBuilder();
            }
            public java.lang.String getFieldName(int number)
            {
                return org.apache.drill.exec.proto.SchemaBitData.BitServerHandshake.getFieldName(number);
            }
            public int getFieldNumber(java.lang.String name)
            {
                return org.apache.drill.exec.proto.SchemaBitData.BitServerHandshake.getFieldNumber(name);
            }
            public java.lang.Class<org.apache.drill.exec.proto.BitData.BitServerHandshake.Builder> typeClass()
            {
                return org.apache.drill.exec.proto.BitData.BitServerHandshake.Builder.class;
            }
            public java.lang.String messageName()
            {
                return org.apache.drill.exec.proto.BitData.BitServerHandshake.class.getSimpleName();
            }
            public java.lang.String messageFullName()
            {
                return org.apache.drill.exec.proto.BitData.BitServerHandshake.class.getName();
            }
            //unused
            public void writeTo(com.dyuproject.protostuff.Output output, org.apache.drill.exec.proto.BitData.BitServerHandshake.Builder builder) throws java.io.IOException {}
        }
        public static java.lang.String getFieldName(int number)
        {
            switch(number)
            {
                case 1: return "rpcVersion";
                case 2: return "authenticationMechanisms";
                default: return null;
            }
        }
        public static int getFieldNumber(java.lang.String name)
        {
            java.lang.Integer number = fieldMap.get(name);
            return number == null ? 0 : number.intValue();
        }
        private static final java.util.HashMap<java.lang.String,java.lang.Integer> fieldMap = new java.util.HashMap<java.lang.String,java.lang.Integer>();
        static
        {
            fieldMap.put("rpcVersion", 1);
            fieldMap.put("authenticationMechanisms", 2);
        }
    }

    public static final class FragmentRecordBatch
    {
        public static final org.apache.drill.exec.proto.SchemaBitData.FragmentRecordBatch.MessageSchema WRITE =
            new org.apache.drill.exec.proto.SchemaBitData.FragmentRecordBatch.MessageSchema();
        public static final org.apache.drill.exec.proto.SchemaBitData.FragmentRecordBatch.BuilderSchema MERGE =
            new org.apache.drill.exec.proto.SchemaBitData.FragmentRecordBatch.BuilderSchema();
        
        public static class MessageSchema implements com.dyuproject.protostuff.Schema<org.apache.drill.exec.proto.BitData.FragmentRecordBatch>
        {
            public void writeTo(com.dyuproject.protostuff.Output output, org.apache.drill.exec.proto.BitData.FragmentRecordBatch message) throws java.io.IOException
            {
                if(message.hasQueryId())
                    output.writeObject(1, message.getQueryId(), org.apache.drill.exec.proto.SchemaUserBitShared.QueryId.WRITE, false);

                if(message.hasReceivingMajorFragmentId())
                    output.writeInt32(2, message.getReceivingMajorFragmentId(), false);
                for(int receivingMinorFragmentId : message.getReceivingMinorFragmentIdList())
                    output.writeInt32(3, receivingMinorFragmentId, true);
                if(message.hasSendingMajorFragmentId())
                    output.writeInt32(4, message.getSendingMajorFragmentId(), false);
                if(message.hasSendingMinorFragmentId())
                    output.writeInt32(5, message.getSendingMinorFragmentId(), false);
                if(message.hasDef())
                    output.writeObject(6, message.getDef(), org.apache.drill.exec.proto.SchemaUserBitShared.RecordBatchDef.WRITE, false);

                if(message.hasIsLastBatch())
                    output.writeBool(7, message.getIsLastBatch(), false);
            }
            public boolean isInitialized(org.apache.drill.exec.proto.BitData.FragmentRecordBatch message)
            {
                return message.isInitialized();
            }
            public java.lang.String getFieldName(int number)
            {
                return org.apache.drill.exec.proto.SchemaBitData.FragmentRecordBatch.getFieldName(number);
            }
            public int getFieldNumber(java.lang.String name)
            {
                return org.apache.drill.exec.proto.SchemaBitData.FragmentRecordBatch.getFieldNumber(name);
            }
            public java.lang.Class<org.apache.drill.exec.proto.BitData.FragmentRecordBatch> typeClass()
            {
                return org.apache.drill.exec.proto.BitData.FragmentRecordBatch.class;
            }
            public java.lang.String messageName()
            {
                return org.apache.drill.exec.proto.BitData.FragmentRecordBatch.class.getSimpleName();
            }
            public java.lang.String messageFullName()
            {
                return org.apache.drill.exec.proto.BitData.FragmentRecordBatch.class.getName();
            }
            //unused
            public void mergeFrom(com.dyuproject.protostuff.Input input, org.apache.drill.exec.proto.BitData.FragmentRecordBatch message) throws java.io.IOException {}
            public org.apache.drill.exec.proto.BitData.FragmentRecordBatch newMessage() { return null; }
        }
        public static class BuilderSchema implements com.dyuproject.protostuff.Schema<org.apache.drill.exec.proto.BitData.FragmentRecordBatch.Builder>
        {
            public void mergeFrom(com.dyuproject.protostuff.Input input, org.apache.drill.exec.proto.BitData.FragmentRecordBatch.Builder builder) throws java.io.IOException
            {
                for(int number = input.readFieldNumber(this);; number = input.readFieldNumber(this))
                {
                    switch(number)
                    {
                        case 0:
                            return;
                        case 1:
                            builder.setQueryId(input.mergeObject(org.apache.drill.exec.proto.UserBitShared.QueryId.newBuilder(), org.apache.drill.exec.proto.SchemaUserBitShared.QueryId.MERGE));

                            break;
                        case 2:
                            builder.setReceivingMajorFragmentId(input.readInt32());
                            break;
                        case 3:
                            builder.addReceivingMinorFragmentId(input.readInt32());
                            break;
                        case 4:
                            builder.setSendingMajorFragmentId(input.readInt32());
                            break;
                        case 5:
                            builder.setSendingMinorFragmentId(input.readInt32());
                            break;
                        case 6:
                            builder.setDef(input.mergeObject(org.apache.drill.exec.proto.UserBitShared.RecordBatchDef.newBuilder(), org.apache.drill.exec.proto.SchemaUserBitShared.RecordBatchDef.MERGE));

                            break;
                        case 7:
                            builder.setIsLastBatch(input.readBool());
                            break;
                        default:
                            input.handleUnknownField(number, this);
                    }
                }
            }
            public boolean isInitialized(org.apache.drill.exec.proto.BitData.FragmentRecordBatch.Builder builder)
            {
                return builder.isInitialized();
            }
            public org.apache.drill.exec.proto.BitData.FragmentRecordBatch.Builder newMessage()
            {
                return org.apache.drill.exec.proto.BitData.FragmentRecordBatch.newBuilder();
            }
            public java.lang.String getFieldName(int number)
            {
                return org.apache.drill.exec.proto.SchemaBitData.FragmentRecordBatch.getFieldName(number);
            }
            public int getFieldNumber(java.lang.String name)
            {
                return org.apache.drill.exec.proto.SchemaBitData.FragmentRecordBatch.getFieldNumber(name);
            }
            public java.lang.Class<org.apache.drill.exec.proto.BitData.FragmentRecordBatch.Builder> typeClass()
            {
                return org.apache.drill.exec.proto.BitData.FragmentRecordBatch.Builder.class;
            }
            public java.lang.String messageName()
            {
                return org.apache.drill.exec.proto.BitData.FragmentRecordBatch.class.getSimpleName();
            }
            public java.lang.String messageFullName()
            {
                return org.apache.drill.exec.proto.BitData.FragmentRecordBatch.class.getName();
            }
            //unused
            public void writeTo(com.dyuproject.protostuff.Output output, org.apache.drill.exec.proto.BitData.FragmentRecordBatch.Builder builder) throws java.io.IOException {}
        }
        public static java.lang.String getFieldName(int number)
        {
            switch(number)
            {
                case 1: return "queryId";
                case 2: return "receivingMajorFragmentId";
                case 3: return "receivingMinorFragmentId";
                case 4: return "sendingMajorFragmentId";
                case 5: return "sendingMinorFragmentId";
                case 6: return "def";
                case 7: return "isLastBatch";
                default: return null;
            }
        }
        public static int getFieldNumber(java.lang.String name)
        {
            java.lang.Integer number = fieldMap.get(name);
            return number == null ? 0 : number.intValue();
        }
        private static final java.util.HashMap<java.lang.String,java.lang.Integer> fieldMap = new java.util.HashMap<java.lang.String,java.lang.Integer>();
        static
        {
            fieldMap.put("queryId", 1);
            fieldMap.put("receivingMajorFragmentId", 2);
            fieldMap.put("receivingMinorFragmentId", 3);
            fieldMap.put("sendingMajorFragmentId", 4);
            fieldMap.put("sendingMinorFragmentId", 5);
            fieldMap.put("def", 6);
            fieldMap.put("isLastBatch", 7);
        }
    }

}
