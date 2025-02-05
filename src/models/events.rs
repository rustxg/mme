pub enum ProtocolMessage {
    S1AP(S1APMessage),
    S6A(S6AMessage),
    S11(S11Message),
}

pub struct ProtocolEvent {
    pub message: ProtocolMessage,
}
